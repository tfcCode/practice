
#https://www.nowcoder.com/practice/02d8d42b197646a5bbd0a98785bb3a34?tpId=85&tqId=29857&tPage=2&rp=2&ru=/ta/2017test&qru=/ta/2017test/question-ranking
num=input().split(" ")
n1=int(num[0])
n2=int(num[1])
n3=int(num[2])
n4=int(num[3])
A=(n1+n3)//2
B=(n2+n4)//2
C=(n4-n2)//2
if(A-B==n1 and B-C==n2 and A+B==n3 and B+C==n4):
    print(str(A)+" "+str(B)+" "+str(C))
else:
    print("No")