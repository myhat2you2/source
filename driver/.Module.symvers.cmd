cmd_/home/hatter/pi/source/driver/Module.symvers := sed 's/ko$$/o/' /home/hatter/pi/source/driver/modules.order | scripts/mod/modpost -m -a   -o /home/hatter/pi/source/driver/Module.symvers -e -i Module.symvers   -T -
