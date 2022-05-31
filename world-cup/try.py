import csv

teams = []
file = open("2018m.csv", "r")
reader = csv.DictReader(file)
for row in reader:
    team = row["team"]
    rating = int(row["rating"])
    buffer = {"team": team, "rating": rating}
    teams.append(buffer)

print(teams)