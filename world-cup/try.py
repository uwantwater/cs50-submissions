import csv

teams = []
file = open("2018m.csv", "r")
reader = csv.DictReader(file)
for row in reader:
    team = row(team)
    teams[team] = int(row(rating))

print(teams)