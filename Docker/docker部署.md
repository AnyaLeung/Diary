#docker 部署

#### 编写： Dockerfile、docker-compose.yml
#### 然后需要
* 安装docker: `$curl -sSL https://get.daocloud.io/docker | sh `</br>
* 安装docker-compose
* $curl -L https://get.daocloud.io/docker/compose/releases/download/1.8.1/docker-compose-`uname -s`-`uname -m` > /usr/local/bin/docker-compose
* $chmod +x /usr/local/bin/docker-compose
* daocloud镜像加速器
$curl -sSL https://get.daocloud.io/daotools/set_mirror.sh | sh -s http://46a9313f.m.daocloud.io

#### 最后
docker-compose build </br>
docker-compose up
