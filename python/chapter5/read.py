def fileopen(fh):
    try:
        with open(fh) as file:
            data = file.readline()
            tmpl = data.strip().split(",")
            
    except IOError as err:
        print("File open fail  " + err)
        return None
                    

def sanitize(time_string):
    if '-' in time_string:
        splitter = '-'
    elif ':' in time_string:
        splitter = ':'
    else:
        return time_string
    (mins,secs) = time_string.split(splitter)
    return (mins + '.' + secs)


try:
    with open("james.txt") as jms:
        data = jms.readline()
        jms_data = data.strip().split(",")
    with open("julie.txt") as jul:
        data = jul.readline()
        jul_data = data.strip().split(",")
    with open("mikey.txt") as mik:
        data = mik.readline()
        mik_data = data.strip().split(",")
        
    clean_james = []
    for each in jms_data:
        clean_james.append(sanitize(each))
    print(sorted(clean_james))
    clean_julia = []
    for each in jul_data:
        clean_julia.append(sanitize(each))
    print(sorted(clean_julia, reverse=True))
    clean_mike = [ sanitize(each) for each in mik_data ]
    print(sorted(clean_mike))
    
    unique_james = []
    for each in sorted(clean_james):
        if each not in unique_james:
            unique_james.append(each)
        
    print(unique_james[0:3])
    
    print(set(clean_julia))
    print(sorted(set(clean_julia))[0:3])
    
except IOError as err:
    print(err)
