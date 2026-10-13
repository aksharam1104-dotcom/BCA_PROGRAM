age=int(input("enter the age: "))
day=input("enter the day: ")
movie_time=input("enter the timings :")
ticket_price=250
if day == "saturday"or day=="sunday":
    is_weekend = True

if is_weekend:
    ticket_price=ticket_price*1.25
    
if movie_time == "morning":
    movie_time="morning show"

elif movie_time=="afternoon":
    movie_time="afternoon show"
    ticket_price=ticket_price*0.90

else:
    movie_time="evening show"
    ticket_price=ticket_price*0.30
    
if age<=5:
    ticket_price=ticket_price*0.50
    category = "CHILD"
elif 6<= age <=59:
    category ="ADULT"
else:
    category = "senior citizen"

if not is_weekend:
        ticket_price=ticket_price*0.90
        
        print(f"\n category:"(category))
        print(f"final ticket price: {ticket_price:.2f}")