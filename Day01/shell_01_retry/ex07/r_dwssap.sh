cat /etc/passwd | grep -v "#" | sed -n 'n;p' | rev | sed -e 's/^.*://' | sort -r | sed -n "$FT_LINE1","$FT_LINE2"p |tr '\n' ','|sed 's/,$/./'|sed -e 's/,/, /g'|
tr -d '\n'
