#Here are the inputs of the program.
print("Enter employee Name:")
sEmployeeName = input()
print("Enter employee annual sales amount:")
iAnnualSales = int(input())
print("Enter number of years employee has worked for the company")
iYearsWorked = int(input())

#Here are the Bonus Rate Calculations.
dBonusRate = (iAnnualSales * 0.01)
if (iAnnualSales > 15000) and (iAnnualSales < 20000):
    dBonusRate = (iAnnualSales * 0.03)
elif (iAnnualSales > 20000) and (iAnnualSales < 25000):
    dBonusRate = (iAnnualSales * 0.05)
elif iAnnualSales > 25000:
    dBonusRate = (iAnnualSales * 0.07)

#Here are the amazon card amount calculations
dCardAmount = 50
if (iYearsWorked >= 8) and (iYearsWorked < 14):
    dCardAmount = 100
elif (iYearsWorked >=13) and (iYearsWorked < 19):
    dCardAmount = 150
elif iYearsWorked > 18:
    dCardAmount = 200

#Here is to make sure that the grammar is not wrong for the output.
if iYearsWorked == 1:
    print(sEmployeeName, "has worked at the company for", iYearsWorked, "year!")
elif iYearsWorked> 1:
    print(sEmployeeName, "has worked at the company for", iYearsWorked, "years!")

#Here is the calculation of putting the output of the Bonus Rate Earned
sBonusRateEarned = "Bonus Rate Earned: 1%"
if (iAnnualSales > 15000) and (iAnnualSales < 20000):
    sBonusRateEarned = ("Bonus Rate Earned: 3%")
elif (iAnnualSales > 20000) and (iAnnualSales < 25000):
    sBonusRateEarned = "Bonus Rate Earned: 5%"
elif iAnnualSales > 25000:
    sBonusRateEarned = "Bonus Rate Earned: 7%"

#Here is the calculation of putting the output of the Amazon Gift Card Value
sAmazonCardValue = "Amazon Gift Card Value: $50"
if (iYearsWorked >= 8) and (iYearsWorked < 14):
    sAmazonCardValue = ("Amazon Gift Card Value: $100")
elif (iYearsWorked >= 13) and (iYearsWorked < 19):
    sAmazonCardValue = ("Amazon Gift Card Value: $150")
elif iYearsWorked > 18:
    sAmazonCardValue = ("Amazon Gift Card Value: $200")

#Final output information
print("Annual Sales Earned: $", iAnnualSales, sBonusRateEarned)
print("****************** BONUS & GIFT VALUE **********************")
print("Bonus Amount: $", dBonusRate, sAmazonCardValue)

#depending on how many years the employee has worked, the output is different!
if (iYearsWorked > 0) and (iYearsWorked < 11):
    print("We hope to have you for MANY more years!")
elif (iYearsWorked >= 10) and (iYearsWorked < 21):
    print("Thank you for your COMMITMENT to our company and its success!")


