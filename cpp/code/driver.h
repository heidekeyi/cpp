//
// Created by 12131 on 2021/9/3.
//


#pragma once



//#include "employ/custom/model/amount/AmountModelDriver.h"
//#include "employ/custom/model/employee/EmployeeModelDriver.h"
//#include "employ/custom/controller/amount/AmountControllerDriver.h"
//#include "employ/custom/controller/employee/EmployeeControllerDriver.h"
//#include "employ/custom/menu/quit/QuitMenuDriver.h"
//#include "employ/custom/menu/display/all/DisplayAllEmployeeMenuDriver.h"
//#include "employ/custom/menu/display/fire/DisplayFireEmployeeMenuDriver.h"
//#include "employ/custom/menu/display/hire/DisplayHireEmployeeMenuDriver.h"
//#include "employ/custom/menu/salary/impl/SalaryIMPLDriver.h"
//#include "employ/custom/menu/salary/promote/PromoteSalaryMenuDriver.h"
//#include "employ/custom/menu/salary/demote/DemoteSalaryMenuDriver.h"
//
//#include "employ/custom/app/AppCustom.h"

void driverUtils();

void driverTable();

void driver() {

    driverUtils();
    driverTable();

//    employ::custom::model::AmountModelDriver{}
//            .insert()
//            .fetchOne()
//            .fetchAll()
//            .fetchSalary();
//    employ::custom::model::EmployeeModelDriver{}
//            .insert()
//            .fetchOne()
//            .fetchAll()
//            .fetchHire()
//            .fetchFire();
//    employ::custom::controller::AmountControllerDriver{}
//            .insert()
//            .get()
//            .salary();
//    employ::custom::controller::EmployeeControllerDriver{}
//            .insert()
//            .get()
//            .salary()
//            .all()
//            .hire()
//            .fire();
//    employ::custom::menu::QuitMenuDriver{}
//            .display()
//            .quitStatus()
//            .action();
//    employ::custom::menu::DisplayAllEmployeeMenuDriver{}
//            .display()
//            .action();
//    employ::custom::menu::DisplayFireEmployeeMenuDriver{}
//            .display()
//            .action();
//    employ::custom::menu::DisplayHireEmployeeMenuDriver{}
//            .display()
//            .action();
//    employ::custom::menu::SalaryIMPLDriver{}
//            .display()
//            .promote()
//            .demote();
//    employ::custom::menu::PromoteSalaryMenuDriver{}
//            .display()
//            .action();
//    employ::custom::menu::DemoteSalaryMenuDriver{}
//            .display()
//            .action();

//    employ::custom::AppCustom{}.start();
}

#include "utils/display/DisplayUtilsDriver.h"
#include "utils/time/TimeUtilsDriver.h"
#include "utils/stream/StreamUtilsDriver.h"

void driverUtils() {
//    utils::DisplayUtilsDriver{}
//            .with()
//            .left()
//            .right();
//    utils::TimeUtilsDriver{}
//            .datetime()
//            .timestamp();
//    utils::StreamUtilsDriver{}
//            .charValue()
//            .clear()
//            .intValue()
//            .lineValue();
}

#include "employ/custom/table/base/BaseTableDriver.h"
#include "employ/custom/table/amount/AmountTableDriver.h"
#include "employ/custom/table/employee/EmployeeTableDriver.h"

void driverTable() {
//    employ::custom::table::BaseTableDriver{}
//            .id()
//            .createTime();
//    employ::custom::table::AmountTableDriver{}
//            .empId()
//            .amount();
    employ::custom::table::EmployeeTableDriver{}
            .empNo()
            .name()
            .hire()
            .fire();
}