import xml.etree.ElementTree as xml
from xml.dom import minidom

filename = "C:/CSCI104/sample.xml"

root = xml.Element("Users")
userelement = xml.Element("user")
root.append(userelement)

uid = xml.SubElement(userelement, "uid")
uid.text = "1"

FirstName = xml.SubElement(userelement, "FirstName")
FirstName.text = "Phanendra"

LastName = xml.SubElement(userelement, "LastName")
LastName.text = "Koppisetti"

Email = xml.SubElement(userelement, "Email")
Email.text = "pkoppisetti1410@gmail.com"

state = xml.SubElement(userelement, "state")
state.text = "TELANAGANA"

location = xml.SubElement(userelement, "location")
location.text = "Siddarth Nagar"

xmlstr = minidom.parseString(xml.tostring(root)).toprettyxml(indent="\t")
with open(filename, "w") as f:
    f.write(xmlstr)

"""
import xml.etree.ElementTree as ET
tree = ET.parse(filename)
root = tree.getroot()

# all items data
print('Expertise Data:')

for elem in root:
   for subelem in elem:
      print(subelem.text)
"""