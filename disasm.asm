0000000000001320 <decoder_test>:
    1320:	f3 0f 1e fa          	endbr64
    1324:	89 fa                	mov    %edi,%edx
    1326:	40 c0 ef 04          	shr    $0x4,%dil
    132a:	48 8d 05 ef 2c 00 00 	lea    0x2cef(%rip),%rax        # 4020 <lut>
    1331:	83 e2 0f             	and    $0xf,%edx
    1334:	83 e7 0f             	and    $0xf,%edi
    1337:	8b 14 90             	mov    (%rax,%rdx,4),%edx
    133a:	01 16                	add    %edx,(%rsi)
    133c:	8b 04 b8             	mov    (%rax,%rdi,4),%eax
    133f:	01 46 04             	add    %eax,0x4(%rsi)
    1342:	c3                   	ret
