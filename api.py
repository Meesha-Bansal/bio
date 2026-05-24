from fastapi import FastAPI
api = FastAPI()
 
all_todos = [
    {'todo_id' : 1,
     "title": "sports"},

     {'todo_id' : 2,
      "title" : "read"} 

]

# GET, POST , PUT, DELETE
@api.get('/')
def welcome():  
    return "welcome"

# todo_id is a path parameter
@api.get('/todos/{todo_id}')
def get_todo(todo_id:int):
    for todo in all_todos:
        if todo['todo_id'] == todo_id:
            return {'result' : todo}
    # return "".join([f"{todo['todo_id']}: {todo['title']}" for todo in all_todos])

# use async-await to make the function asynchronous, usually when we fetch data from database


@api.get('/todos')
