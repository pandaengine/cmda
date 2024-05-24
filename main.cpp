#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <string>
// 哈哈哈

int main(int argc, char *argv[] ) {
	using namespace std;
	namespace fs = filesystem;

	//if (argc > 0) printf("0: %s \n", argv[0]);
	if (argc > 1) {
		//printf("1: %s \n", argv[1]);

		fs::path path(argv[1]);
		path = fs::absolute(path);
		//printf("path: %s \n", path.string().c_str());

		string cmd("cmd.exe /K cd /D ");
		cmd += path.string();
		system(cmd.c_str());

	} else {
		system("cmd.exe");
	}
	return 0;
}
