sudo docker run -d --name=mariadb -p 3306:3306 -e TZ=Asia/Kolkata \
             -v ~/databases/mariadb_data_dir:/var/lib/mysql \
               -e MYSQL_ROOT_PASSWORD=root mariadb
