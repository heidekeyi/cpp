//
// Created by 12131 on 2021/9/3.
//


#pragma once

#include "employ/custom/app/AppCustom.h"

void driverUtils();

void driverTable();

void driverMode();

void driverController();

void driverMenu();

void driver() {
    driverUtils();
    driverTable();
    driverMode();
    driverController();
    driverMenu();
    employ::custom::AppCustom{}.start();
}

#include "utils/display/DisplayUtilsDriver.h"
#include "utils/time/TimeUtilsDriver.h"
#include "utils/stream/StreamUtilsDriver.h"

void driverUtils() {
    using namespace utils;
//    DisplayUtilsDriver{}
//            .with()
//            .left()
//            .right();
//    TimeUtilsDriver{}
//            .datetime()
//            .timestamp();
//    StreamUtilsDriver{}
//            .charValue()
//            .clear()
//            .intValue()
//            .lineValue();
}

#include "employ/custom/table/base/BaseTableDriver.h"
#include "employ/custom/table/amount/AmountTableDriver.h"
#include "employ/custom/table/employee/EmployeeTableDriver.h"

void driverTable() {
    using namespace employ::custom::table;
//    BaseTableDriver{}
//            .id()
//            .createTime();
//    AmountTableDriver{}
//            .empId()
//            .amount();
//    EmployeeTableDriver{}
//            .empNo()
//            .name()
//            .hire()
//            .fire();
}

#include "employ/custom/model/amount/AmountModelDriver.h"
#include "employ/custom/model/employee/EmployeeModelDriver.h"

void driverMode() {
    using namespace employ::custom::model;
//    AmountModelDriver{}
//            .insert()
//            .fetchOne()
//            .fetchAll()
//            .fetchSalary();
//    EmployeeModelDriver{}
//            .insert()
//            .fetchOne()
//            .fetchAll()
//            .fetchHire()
//            .fetchFire()
//            .update();
}

#include "employ/custom/controller/amount/AmountControllerDriver.h"
#include "employ/custom/controller/employee/EmployeeControllerDriver.h"

void driverController() {
    using namespace employ::custom::controller;
//    AmountControllerDriver{}
//            .insert()
//            .get()
//            .salary();
//    EmployeeControllerDriver{}
//            .insert()
//            .get()
//            .salary()
//            .all()
//            .hire()
//            .fire()
//            .update();
}

#include "employ/custom/menu/quit/QuitMenuDriver.h"
#include "employ/custom/menu/demote/DemoteMenuDriver.h"
#include "employ/custom/menu/promote/PromoteMenuDriver.h"
#include "employ/custom/menu/all/AllMenuDriver.h"
#include "employ/custom/menu/fired/FiredMenuDriver.h"
#include "employ/custom/menu/hiring/HiringMenuDriver.h"
#include "employ/custom/menu/hire/HireMenuDriver.h"
#include "employ/custom/menu/fire/FireMenuDriver.h"

void driverMenu() {
    using namespace employ::custom::menu;
//    QuitMenuDriver{}
//            .display()
//            .quitStatus()
//            .action();
//    DemoteMenuDriver{}
//            .display()
//            .action();
//    PromoteMenuDriver{}
//            .display()
//            .action();
//    AllMenuDriver{}
//            .display()
//            .action();
//    FiredMenuDriver{}
//            .display()
//            .action();
//    HiringMenuDriver{}
//            .display()
//            .action();
//    HireMenuDriver{}
//            .display()
//            .action();
//    FireMenuDriver{}
//            .display()
//            .action();
}