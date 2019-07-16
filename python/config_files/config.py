import xml.etree.ElementTree as ET

class Configuration:
    config_file = ''

    def __init__(self, input):
        self.config_file = input

    
    def get_component_names(self):
        components = ET.parse(self.config_file).findall('component')
        names = list()
        for component in components:
            names.append(component.find('name').text)
        return names


    def component_info(self, component, *parameters):
        components = ET.parse(self.config_file).findall('component')
        for x in components:
            if x.find('name').text == component:
                try:
                    if len(parameters) == 1:
                        return x.find(parameters[0]).text
                    elif len(parameters) == 2:
                        return x.find(parameters[0]).find(parameters[1]).text
                    else:
                        print '-- ERROR: Invalid parameters'
                except:
                    print '-- ERROR: Invalid parameters'
