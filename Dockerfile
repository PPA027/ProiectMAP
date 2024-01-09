FROM gcc:latest

WORKDIR /app

COPY . /app

RUN gcc -o proiectMAP proiectMAP.c

CMD ["./proiectMAP"]
