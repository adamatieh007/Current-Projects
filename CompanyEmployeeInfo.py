#Assigning Counters & Accumulator variables
iTotalHours = 0
iOvertimeEmployees = 0
dTotalGrossPay = 0
#The for...loop structure!
for iEmployeeInfo in range(1,6):
    print("Enter Employee Name: ")
    sName = input()
    print("Enter Department Number: ")
    iDepartmentNo = int(input())
    print("Enter number of hours worked: ")
    iHoursWorked = int(input())
    print("Enter pay rate: ")
    dPayRate = float(input())

    sDepName = "Sales"
    if iDepartmentNo == 2:
     sDepName = "Administration"
    elif iDepartmentNo == 3:
        sDepName = "Warehouse"
    print("Department Name: ", sDepName, "Employee Name: ", sName)
    print("Hours Worked: ", iHoursWorked, "Pay Rate: ", dPayRate)

    dGrossPay = iHoursWorked * dPayRate
    if iHoursWorked > 40:
        dGrossPay = (40 * dPayRate) + (iHoursWorked - 40) * dPayRate * 1.5
    else: dGrossPay = iHoursWorked * dPayRate
    print("Gross Pay for this employee is $:", dGrossPay)


    iTotalHours = iTotalHours + iHoursWorked
    if iHoursWorked > 40:
        iOvertimeEmployees = iOvertimeEmployees + 1
    dTotalGrossPay = dTotalGrossPay + dGrossPay

#Final Output!
print("*" * 21, "Summary Information", "*" * 21)
print("Total hours for all employees: ", iTotalHours)
print("Number of employees that worked overtime: ", iOvertimeEmployees)
print("Total gross pay for all employees: ", dTotalGrossPay)
