# Floor Cost
# Calculate the total cost of tile it would take to cover a floor plan of width and height, using a cost entered by the user

width = float(input("How wide is the floor (ft)? "))
height = float(input("How long is the floor (ft)? "))
unit_price = float(input("How much per square foot? "))

area = width * height
total = unit_price * area

print("The total cost of the floor is ${:.2f}".format(total))