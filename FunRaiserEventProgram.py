#Enter Customer Name!
print("Enter Customer First Name:")
sFirst = str(input())
print("Enter Customer Last Name:")
sLast = str(input())

#Ticket Quantity!
print("Enter the Number of Adult Tickets:")
iAdultTicketQuantity = int(input())
print("Enter the Number of Children Tickets:")
iChildTicketQuantity = int(input())
dChildTicketCost = (iChildTicketQuantity * 8.50)
dAdultTicketCost = (iAdultTicketQuantity * 10.00)

#Parking and Vehicles if a customer needs one
print("Does the customer need a Parking spot?")
sParking = str(input())
if sParking =="Y":
    print("How many vehicles?")
    iVehicleQuantity = int(input())
    dParkingPrice = (iVehicleQuantity * 10.5)
else:
    dParkingPrice = 0


#Meal tickets if customer wants one
dChildMealCost = (iChildTicketQuantity * 10)
dAdultMealCost = (iAdultTicketQuantity * 12)
print("Does the customer want a meal ticket?")
sMeal = str(input())
if sMeal=="Y":
    dMealTotal = (dChildMealCost+dAdultMealCost)
else:
    dMealTotal = 0

#Raffle Ticket if a customer wants one
print("Does the customer want to buy a raffle ticket?")
sRaffle = str(input())
if sRaffle =="Y":
    print("How many would the customer like?")
    iRaffleQuantity = int(input())
    dRaffleCost =(iRaffleQuantity * 10)
else:
    dRaffleCost = 0

#Total Price with output message!
dTicketTotal = (dChildTicketCost + dAdultTicketCost)
dCustomerTotal = (dMealTotal + dParkingPrice + dRaffleCost + dTicketTotal)
print(sFirst, sLast, "Order Summary:")
print("Tickets: Children:", +iChildTicketQuantity, "Adults:", iAdultTicketQuantity)
print("The subtotal for all the tickets purchased  is $", dTicketTotal)
if sMeal == "Y": print("The subtotal for all the meals purchased is $", dMealTotal)
if sParking == "Y": print("The parking total is $", dParkingPrice)
if sRaffle == "Y": print("The raffle total is: $", dRaffleCost)
print("$" * 18, "Customer Total is $", dCustomerTotal)
print("*** Thank you for your Generosity :) ***")