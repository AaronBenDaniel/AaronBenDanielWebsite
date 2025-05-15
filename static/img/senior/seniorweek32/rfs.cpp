#include <filesystem>
#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include <unistd.h>

using namespace std;

const int uid = getuid();

const int MAXSIZE = 10000; // Max filesize (in bytes) for files to be searched

int error(string message) {
  cout << message << endl;
  return (1);
}

void processFile(filesystem::path path, string target) {
  if (filesystem::status(path).type() != filesystem::file_type::regular)
    return;
  if (file_size(path) > MAXSIZE)
    return;
  string line;
  ifstream file(path.string());
  while (getline(file, line)) {
    if (line.find(target) == string::npos)
      continue;
    cout << path.string() << endl;
    return;
  }
}

void recursiveIterate(filesystem::path path, string target) {
  for (filesystem::directory_entry file :
       filesystem::directory_iterator(path)) {
    if (filesystem::is_directory(file))
      recursiveIterate(file, target);
    else
      processFile(file.path(), target);
  }
}

int main(int numArgs, char **args) {
  if (numArgs < 2)
    return (error("Please provide a directory"));
  if (numArgs < 3)
    return (error("Please provide a target phrase"));
  string root = args[1];
  filesystem::path rootPath(root);
  string target = args[2];

  if (!filesystem::exists(rootPath))
    return (error("Please provide a valid path"));

  if (status(rootPath).type() == filesystem::file_type::directory)
    recursiveIterate(rootPath, target);
  else
    processFile(rootPath, target);

  return (0);
}