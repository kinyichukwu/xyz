from cs50 import get_float

while True:
    dollars = get_float("Change owed: ")
    if dollars >= 0:
        break

cents = round(dollars * 100)
coins = 0
denoinations = [25, 10, 5, 1]

for denom in denoinations:
    coins += cents // denom 
    cents %= denom

print(coins)