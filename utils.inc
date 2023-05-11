macro sys_read arg0, arg1, arg2
{
  mov rax, 0
  mov rdi, arg0
  mov rsi, arg1
  mov rdx, arg2
  syscall
}

macro sys_write arg0, arg1, arg2
{
  mov rax, 1
  mov rdi, arg0
  mov rsi, arg1
  mov rdx, arg2
  syscall
}
