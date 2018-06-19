t=int(input());
for i in range(t):
     s=input().split(' ')
     a=int(s[0])
     b=int(s[1])
     a=a**65
     if(a%b==0):
          print("Yes")
     else:
          print("No")
