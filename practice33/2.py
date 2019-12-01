
#https://www.nowcoder.com/practice/5a304c109a544aef9b583dce23f5f5db?tpId=85&tqId=29858&tPage=2&rp=2&ru=/ta/2017test&qru=/ta/2017test/question-ranking
i = int(input())
num = input().split(" ")
sum = 0
temp = -9999999
for x in num[:]:
    sum = sum + int(x)
    temp = max(temp, sum)
    if (sum < 0):
        sum = 0;
print(str(temp))
