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
//    employ::custom::AppCustom{}.start();
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
#include "employ/custom/menu/salary/demote/DemoteSalaryMenuDriver.h"
#include "employ/custom/menu/salary/promote/PromoteSalaryMenuDriver.h"
#include "employ/custom/menu/employee/display/all/DisplayAllEmployeeMenuDriver.h"
#include "employ/custom/menu/employee/display/fire/DisplayFireEmployeeMenuDriver.h"
#include "employ/custom/menu/employee/display/hire/DisplayHireEmployeeMenuDriver.h"
#include "employ/custom/menu/employee/hire/HireEmployeeMenuDriver.h"

void driverMenu() {
    using namespace employ::custom::menu;
//    QuitMenuDriver{}
//            .display()
//            .quitStatus()
//            .action();
//    DemoteSalaryMenuDriver{}
//            .display()
//            .action();
//    PromoteSalaryMenuDriver{}
//            .display()
//            .action();
//    DisplayAllEmployeeMenuDriver{}
//            .display()
//            .action();
//    DisplayFireEmployeeMenuDriver{}
//            .display()
//            .action();
//    DisplayHireEmployeeMenuDriver{}
//            .display()
//            .action();
//    HireEmployeeMenuDriver{}
//            .display()
//            .action();
}