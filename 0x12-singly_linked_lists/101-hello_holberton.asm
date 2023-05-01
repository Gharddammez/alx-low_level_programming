lea     rdi, [hello]
xor     eax, eax
call    printf

mov     rsp, rbp
pop     rbp
ret
