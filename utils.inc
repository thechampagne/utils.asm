macro sys_read arg0*, arg1*, arg2*
{
  mov rax, 0
  mov rdi, arg0
  mov rsi, arg1
  mov rdx, arg2
  syscall
}

macro sys_write arg0*, arg1*, arg2*
{
  mov rax, 1
  mov rdi, arg0
  mov rsi, arg1
  mov rdx, arg2
  syscall
}

macro sys_exit arg0
{
  mov rax, 60
  if arg0 eq
    mov rdi, 0
  else
    mov rdi, arg0
  end if
  syscall
}
