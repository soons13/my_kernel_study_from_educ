cmd_/home/kernel-study/kernel/study-arm-raspi/modules/hello/Module.symvers :=  sed 's/ko$$/o/'  /home/kernel-study/kernel/study-arm-raspi/modules/hello/modules.order | scripts/mod/modpost -m -a     -o /home/kernel-study/kernel/study-arm-raspi/modules/hello/Module.symvers -e -i Module.symvers -T - 
