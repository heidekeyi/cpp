#include "code/utils/test/TestUtils.h"
#include "code/employ/custom/test/TestCustom.h"
#include "code/employ/custom/app/AppCustom.h"

int main() {
//    utils::TestUtils{}.streamUtils();
    employ::custom::TestCustom{}.testController();
//    employ::custom::AppCustom{}.start();
    return 0;
}










