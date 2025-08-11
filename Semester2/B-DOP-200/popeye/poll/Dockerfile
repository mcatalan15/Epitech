FROM python:3.9
WORKDIR /src
COPY . .
EXPOSE 80
RUN pip3 install -r requirements.txt
CMD ["flask", "run", "--host=0.0.0.0", "--port=80"]