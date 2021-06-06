num1, num2 = map(str, input().split())

num1, num2 = int(num1,2), int(num2,2)

out = num1 + num2

print(bin(out)[2:])
