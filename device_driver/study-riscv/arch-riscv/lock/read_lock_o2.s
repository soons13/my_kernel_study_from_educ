	.file	"read_lock.c"
	.option nopic
	.section	.text.startup,"ax",@progbits
	.align	1
	.globl	main
	.type	main, @function
main:
	lui	    a5,%hi(lock)
	addi	a3,a5,%lo(lock)
 #APP
# 74 "../include/spinlock.h" 1
1:	lr.w	a4, 0(a3)
	bltz	a4, 1b
	addi	a4, a4, 1
	sc.w	a4, a4, 0(a3)       //lock += 1
	bnez	a4, 1b
	fence   r , rw

# 0 "" 2
 #NO_APP
	li	    a4,-1
	addi	a5,a5,%lo(lock)
 #APP
# 138 "../include/spinlock.h" 1
    fence rw,  w
	amoadd.w x0, a4, 0(a5)      //lock -= 1

# 0 "" 2
 #NO_APP
	li	    a0,0
	ret
	.size	main, .-main
	.globl	lock
	.section	.sbss,"aw",@nobits
	.align	3
	.type	lock, @object
	.size	lock, 4
lock:
	.zero	4
	.ident	"GCC: (GNU) 7.2.0"
