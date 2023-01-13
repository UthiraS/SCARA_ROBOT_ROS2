from setuptools import setup

package_name = 'py_srvcli'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Uthira',
    maintainer_email='usivaraman@wpi.edu',
    description='Inverse Kinematics Python Client Server',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': ['service = py_srvcli.traj_follow:main',
        'listener = py_srvcli.traj_follow:main',
        'vel = py_srvcli.Velocity_Service:main',
        'control = py_srvcli.control_velocity:main',
        ],
    },
)
