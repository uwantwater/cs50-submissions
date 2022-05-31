import csv

teams = []
count = {}
file = open("2018m.csv", "r")
reader = csv.DictReader(file)
for row in reader:
    buffer = {"team" : row["team"], "rating": int(row["rating"])}
    teams.append(buffer)
    count[row["team"]] = 0
file.close()

print(count)