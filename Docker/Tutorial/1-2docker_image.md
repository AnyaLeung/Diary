Dockerfile is a textfile which contains all commands needed.
z.b.
Dockerfile
```
#base image
FROM python:3-onbuild

#port number that the container expose
EXPOSE 5000

#run the app
CMD['python', './app.py']
```

```
docker build -t name .  #to local docker image registry

docker build -t anyaleung/[name] .
docker push anyaleung/catnip #push to public make this image public
```
