st=input("Enter the str:")
l=len(st)
st1=list(st)
k=round(l//2)
st1[k]='*'
ans=''
for x in st1:
	ans=ans+x
print(ans)
