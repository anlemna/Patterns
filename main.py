import csv

with open("people_data.csv", "w") as file:
    writer = csv.writer(file)
    writer.writerow(
        ("Name", "LastName")
    )

people = [
    ["Anna","Lemeshko"],
    ["Dasha", "Kirichenko"],
    ["Lera", "Gracheva"],
    ["Olga", "Kuznetcova"],
]

for user in people:
    with open("people_data.csv", "a") as file:
        writer = csv.writer(file)
        writer.writerow(
            user
        )