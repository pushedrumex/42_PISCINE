ifconfig -a | grep "ether" | tr -d '\t' | sed "s/ether //" | sed '/media/d'
