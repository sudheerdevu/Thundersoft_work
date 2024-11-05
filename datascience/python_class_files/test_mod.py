def intro():
	return 'It is a new module that we have created'

def fact(num):
	f=1
	for i in range(num,1,-1):
		f=f*i
	return f

if __name__=='__main__':
    print('Hello everyone!')
    print('How are you?')