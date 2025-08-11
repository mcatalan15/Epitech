c_size = int(input("Enter size of column: "))
r_size = int(input("Enter size row: "))
x = []
y = []
for j in range(0, c_size):
    y.append(0)
for i in range(0, r_size):
    x.append(y)
print(x)