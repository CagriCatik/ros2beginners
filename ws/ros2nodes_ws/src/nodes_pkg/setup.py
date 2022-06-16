from setuptools import setup

package_name = 'nodes_pkg'

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
    maintainer='cc',
    maintainer_email='mccatik@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        "py_node = nodes_pkg.my_first_node:main",
        "talker_node = nodes_pkg.talker:main",
        "listener_node = nodes_pkg.listener:main",
        ],
    },
)
