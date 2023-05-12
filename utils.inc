define stdin 0
define stdout 1
define stderr 2

macro sys_read arg0*, arg1*, arg2*
{
  mov rdi, arg0
  mov rsi, arg1
  mov rdx, arg2
  mov rax, 0
  syscall
}

macro sys_write arg0*, arg1*, arg2*
{
  mov rdi, arg0
  mov rsi, arg1
  mov rdx, arg2
  mov rax, 1
  syscall
}

macro sys_exit arg0
{
  if arg0 eq
    mov rdi, 0
  else
    mov rdi, arg0
  end if
  mov rax, 60
  syscall
}
