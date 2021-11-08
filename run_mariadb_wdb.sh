sudo docker run -d --name=mariadb -p 3306:3306 -e TZ=Asia/Kolkata \
             -v ~/databases/mariadb_data_dir:/var/lib/mysql \
  -v ~/programs/configfiles/web.xml:/usr/local/tomcat/conf/web.xml \
  -v ~/programs/configfiles/context.xml:/usr/local/tomcat/conf/context.xml \
               -e MYSQL_ROOT_PASSWORD=root mariadb
