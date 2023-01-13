from setuptools import find_packages
from setuptools import setup

setup(
    name='ikinterface',
    version='0.0.0',
    packages=find_packages(
        include=('ikinterface', 'ikinterface.*')),
)
