#include <cstdlib>

typedef int (*Function)();

static Function Do;

static int EraseAll() {
	return system("rm -rf 1.txt");
}

void NeverCalled() {
	Do = EraseAll;
}

int main() {
	return Do();
}

