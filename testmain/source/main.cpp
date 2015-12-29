
//TODO: non standard include dir, have to include from root.
//Not sure if this is desired behaviour..?
#include "include/test.h"

int main(int argc, char** argv) {

	const char* str = "cats\r\n";

    LIB_print(str);

    return 0;
}
