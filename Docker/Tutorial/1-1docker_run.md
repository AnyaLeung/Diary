```
docker pull xxx     #pull imagexxx from docker registry

docker run  xxx     #begin to run container
docker run busybox echo "hello from busybox"   #begin to run container with one command
docker run -it busybox sh              #begin to run container with many commands

docker run -d -P --name [container_name_you_give] prakhar1989/static-site
#-d:run in bg   -P:random give port     --name: name this container

docker run -p 8888:80 prakhar1989/static-site

docker ps           #view running containers
docker ps -a        #view ran containers

docker rm xxx_id
docker stop [container_id]

docker port [container_name_you_gave]

docker images
```
