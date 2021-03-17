pip install plyer

#modules list
from plyer import notification
import time
import datetime
import webbrowser

from plyer import notification
import time
import datetime
import webbrowser

#"chill" is how i had decribe noclass

 #dictionary of subjects as key and joining link as value
  
d={
'BEEE': 'https://meet.google.com/lookup/ktvpargjmp',
 'SCP': 'https://meet.google.com/lookup/pjveaavfvu',
 'ENGLISH': 'https://meet.google.com/lookup/gmrdvkmsca',
 'MATHS': 'https://meet.google.com/lookup/znwutbwmzs',
 'GRAPHICS_LAB': 'https://meet.google.com/lookup/yfcovegghz', 
 'YOGA': ' https://meet.google.com/lookup/mtkcodimhd',
 'PROFF_SKILLS':'https://meet.google.com/lookup/tmwunmdyjq',
 'COI':'https://meet.google.com/lookup/qmhpuaooax',
 'ENG_LAB':'https://meet.google.com/lookup/gmrdvkmsca',
 'SCP_LAB':'https://meet.google.com/lookup/pjveaavfvu',
 'BEEE_LAB':'https://meet.google.com/lookup/ktvpargjmp',
 'chill':'https://www.google.com/',
}

def subTable(week,_timeSlot):
    t=_timeSlot
    if week==7:week=0
    #l is 2d list
    l= [
      ["chill", "chill", "chill", "chill", "chill", "chill"],#chill or no class
      ["chill", "BEEE", "MATHS", "SCP", "ENG_LAB", "chill"],#monday 
      ["chill", "chill", "SCP", "chill", "chill", "chill"],#tuesday
      ["chill", "MATHS", "PROFF_SKILLS", "BEEE", "SCP_LAB", "SCP_Lab"],#wednesday
      ["chill", "COI", "SCP", "ENGLISH", "YOGA", "chill"],#thursday
      ["chill", "SCP", "BEEE", "MATHS", "BEEE_LAB", "BEEE_LAB"],#friday
      ["chill", "MATHS", "BEEE", "ENGLISH", "GRAPHICS_LAB", "GRAPHICS_LAB"],]#saturday
    return l[week][t]



def TimeSlot(h,m):#this function returns class period (1,2,..)
    t=h*100+m #equation to combine both hour and minute in a single int value
    
    if (t < 930 or t > 1520):return 0;
    else:
        if (t < 1020):return 1
        elif (t < 1135 and t >= 1045):return 2
        elif (t < 1250 and t >= 1200):return 3
        elif (t < 1450 and t >= 1400):return 4
        elif (t < 1520 and t >= 1450):return 5
        else:return 0




while 1:
    prev=-1#stores previous class timeSlot 
    v=datetime.datetime.now()
    hr=int(v.strftime('%H'))#current hour
    w=int(v.strftime('%w'))#todays week day
    mn=int(v.strftime('%M'))#current minute
    _timeSlot=TimeSlot(hr,mn)#storing value in a variable 
    
    if _timeSlot != prev:
        prev=_timeSlot#to update the prev
        Class=subTable(w,_timeSlot)#class name 
        
        url=d[Class]
        webbrowser.open_new(url)
        notification.notify(
                        title="Upcomming_Class",
                        message=Class,
                        timeout=4, #duration it will show notification,
#                         app_icon="", # you can add icon as well here . 
                        )
    
    time.sleep(60)#freq of every notification
    
    import datetime

v=datetime.datetime.now()
# print(v)

hr=int(v.strftime('%H'))#current hour
w=int(v.strftime('%w'))#week
mn=int(v.strftime('%M'))#current minute

print(hr,mn,w)

def TimeSlot(h,m):
    t=h*100+m
    
    if (t < 930 or t > 1520):return 0;
    else:
        if (t < 1020):return 1
        elif (t < 1135 and t >= 1045):return 2
        elif (t < 1250 and t >= 1200):return 3
        elif (t < 1450 and t >= 1400):return 4
        elif (t < 1520 and t >= 1450):return 5
        else:return 0

def subTable(week,_timeSlot): 
    t=_timeSlot
    if week==7:week=0
    #l is 2d list
    l= [
      ["chill", "chill", "chill", "chill", "chill", "chill"],#fill all as chill or no class
      ["chill", "BEEE", "MATHS", "SCP", "ENG_LAB", "chill"],#monday 
      ["chill", "chill", "SCP", "chill", "chill", "chill"],#tuesday
      ["chill", "MATHS", "PROFF_SKILLS", "BEEE", "SCP_LAB", "SCP_Lab"],#wednesday
      ["chill", "COI", "SCP", "ENGLISH", "YOGA", "chill"],#thursday
      ["chill", "SCP", "BEEE", "MATHS", "BEEE_LAB", "BEEE_LAB"],#friday
      ["chill", "MATHS", "BEEE", "ENGLISH", "GRAPHICS_LAB", "GRAPHICS_LAB"],]#saturday
    return l[week][t]
  
  import webbrowser
url="https://www.youtube.com/"#name of link
webbrowser.open_new(url)
