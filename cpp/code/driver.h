//
// Created by 12131 on 2021/9/3.
//


#pragma once

#include "employ/app/AppCustom.h"

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

#include "employ/table/base/BaseTableDriver.h"
#include "employ/table/amount/AmountTableDriver.h"
#include "employ/table/employee/EmployeeTableDriver.h"

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

#include "employ/model/amount/AmountModelDriver.h"
#include "employ/model/employee/EmployeeModelDriver.h"

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

#include "employ/controller/amount/AmountControllerDriver.h"
#include "employ/controller/employee/EmployeeControllerDriver.h"

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

#include "employ/menu/quit/QuitMenuDriver.h"
#include "employ/menu/demote/DemoteMenuDriver.h"
#include "employ/menu/promote/PromoteMenuDriver.h"
#include "employ/menu/all/AllMenuDriver.h"
#include "employ/menu/fired/FiredMenuDriver.h"
#include "employ/menu/hiring/HiringMenuDriver.h"
#include "employ/menu/hire/HireMenuDriver.h"
#include "employ/menu/fire/FireMenuDriver.h"

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