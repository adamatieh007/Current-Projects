#Setting up Counters and Accumulators
iJudgeNo = 0
dJudgeScore = 0
dTotalJudgeScore = 0
dAverageScore = 0
iHighest = 0
iLowest = 99
#Title being made!
print("*" * 13, "Cooking Contest", "*" * 13)
#Input
print("Enter cook's name who is being judged: ")
sCookName = input()

#Loop Structure
for iJudges in range(1,7):
    iJudgeNo = iJudgeNo + 1
    print("Judge", iJudgeNo, "Score :")
#Judge number getting set up
    dJudgeScore = int(input())
    dTotalJudgeScore = dTotalJudgeScore + dJudgeScore
#Highest and lowest being set up
    if dJudgeScore > iHighest:
        iHighest = dJudgeScore
    if dJudgeScore < iLowest:
        iLowest = dJudgeScore
#Formula for average Score
dAverageScore = (dTotalJudgeScore / 6)
#Final Output!
print(sCookName, "'s final results: ")

print("Average Score: ", dAverageScore)

print("Highest Score: ", iHighest)

print("Lowest Score: ", iLowest)
