        docker run -d --name ols_php  --restart=always  -p 8080:80 \
         -v ~/programs/web/:/var/www/vhosts/localhost/html/ litespeedtech/openlitespeed:1.7.11-lsphp74


